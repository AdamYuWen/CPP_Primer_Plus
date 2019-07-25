// Programming Exercise 12.6
// implemented from bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include "queue.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

// setting things up
    std::srand(std::time(0)); // random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line1(qs); // line queue holds up to qs people
	Queue line2(qs);

    cout << "Enter the number of simulation hours: ";
    int hours; // hours of simulation
    cin >> hours;

// simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles
    // cout << "Enter the average number of customers per hour: ";
    // double perhour; // average # of arrival per hour
    // cin >> perhour;

    Item temp; // new customer data
    long turnaways, prev_turnaways; // turned away by full queue
    long customers, prev_customers; // joined the queue
    long served, prev_served; // served during the simulation
    long sum_line, prev_sum_line; // cumulative line length
    int wait_time1, wait_time2; // time until autoteller is free
    long line_wait, prev_line_wait; // cumulative time in line
    double perhour = 0; // average # of arrival per hour

    do {
		while (line1.dequeue(temp) || line2.dequeue(temp)) { // empty queue.
			// otherwise, it may affect the following do-while loop
			continue;
		}
		if (perhour != 0) {
			prev_turnaways = turnaways;
			prev_customers = customers;
			prev_served = served;
			prev_sum_line = sum_line;
			prev_line_wait = line_wait;
		}
		turnaways = customers = served = sum_line = line_wait = 0;
		wait_time1 = wait_time2 = 0;
        ++perhour;
        double min_per_cust; // average time between arrivals
        min_per_cust = MIN_PER_HR / perhour;
// running the simulation
        for (int cycle = 0; cycle < cyclelimit; cycle++) {
            if (newcustomer(min_per_cust)) { // have newcomer
                if (line1.isfull() && line2.isfull()) {
                    turnaways++;
                }
                else {
                    customers++;
                    temp.set(cycle); // cycle = time of arrival
					if (line1.queuecount() <= line2.queuecount()) {
						line1.enqueue(temp); // add newcomer to line
					} else {
						line2.enqueue(temp);
					}
                }
            }
            if (wait_time1 <= 0 && !line1.isempty()) {
				line1.dequeue(temp); // attend next customer
				wait_time1 = temp.ptime(); // for wait_time minutes
				line_wait += cycle - temp.when();
				served++;
            }
			if (wait_time2 <= 0 && !line2.isempty()) {
				line2.dequeue(temp); // attend next customer
				wait_time2 = temp.ptime(); // for wait_time minutes
				line_wait += cycle - temp.when();
				served++;
			}
            if (wait_time1 > 0) {
                wait_time1--;
            }
			if (wait_time2 > 0) {
				wait_time2--;
			}
            sum_line += line1.queuecount() + line2.queuecount();
        }
        cout << "perhour = " << perhour << "\t==>\t"
             << (double) line_wait / served << endl;
    } while((double) line_wait / served < 1);

// reporting results
    if (prev_customers > 0) {
        cout << "number of customers per hour: " << perhour - 1 << endl;
        cout << "customers accepted: " << prev_customers << endl;
        cout << "  customers served: " << prev_served << endl;
        cout << "         turnaways: " << prev_turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double)prev_sum_line / cyclelimit << endl;
        cout << " average wait time: "
             << (double)prev_line_wait / prev_served << " minutes\n";
    }
    else {
        cout << "No customers!\n";
    }
    cout << "Done!\n";

    return 0;
}
// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x) {
    return (std::rand() * x / RAND_MAX < 1);
}