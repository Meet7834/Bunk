#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float atn, total, bunk, per; //atn = attended classes, total = total classes, bunk = number of classes you can bunk, per = percentage attendence
    int rem, extAtn; // rem = remaining classes, extAtn = number of classes you need to attend more 
    char query;
    bunk = 0;
    extAtn = 0;
    
    cout << "A for Advanced and B for Basic: ";
    cin >> query;
    cout << "\nEnter the number of lectures attended: ";
    cin >> atn;
    cout << "\nEnter the number of Lectures Taken: ";
    cin >> total;
    
    per = (atn*100.0 / total);

    // Advanced Version
    if (query == 'A' || query == 'a'){ 
        if (per >=75){
            
            cout << "\nNumber of Remaining Classes: " ;
            cin >> rem;
            
            while (per >=75){
                bunk++;
                total++;
                per = (atn / total)*100;
            }

            int remainder = rem % 4; //remainder = remainder of (remaining classes/ 4)
            int quote = rem / 4; // quote = quotient of (remaining classes/ 4)

            while (quote >0){
                atn = atn + 3;
                total = total + 4;
                bunk++;
                extAtn = extAtn +3;
                quote--;
            }

            extAtn = extAtn + remainder;
            atn = atn + remainder;
            total = total + remainder;
            
            if (per >= 75){
                cout << "You can bunk " <<  bunk << " classes" << endl;
                cout << "And Your Attendence will be: " << setprecision(4) << per << " %"<< endl;
                cout << "You will need to attend " << extAtn << " classes" << endl;
            }
            else if (per < 75){
                per = (atn*100) / (total-1);
                cout << "You can bunk " <<  bunk-1 << " classes" << endl;
                cout << "And Your Attendence will be: " << setprecision(4) << per << " %"<< endl;
                cout << "You will need to attend " << extAtn << " classes" << endl;
            }
            
            
        }
        //Agar 75% se kam ho to attendence
        else {
            while (per < 75){
                atn++;
                extAtn++;
                total++;
                per = (atn / total)*100;
            }
            cout << extAtn << " lagani padengi " << endl;
        }
    }

    //Basic Version
    else{
        if (per >=75){
            while (per >=75){
                bunk++;
                total++;
                per = (atn / total)*100;
            }
            
            if (per >= 75){
                cout << "You can bunk " <<  bunk << " classes" << endl;
                cout << "And Your Attendence will be: " << setprecision(4) << per << " %"<< endl;
            }
            else if (per < 75){
                per = (atn*100) / (total-1);
                cout << "You can bunk " <<  bunk-1 << " classes" << endl;
                cout << "And Your Attendence will be: " << setprecision(4) << per << " %"<< endl;
            }
        }
        //Agar 75% se kam ho to attendence
        else {
            while (per < 75){
                atn++;
                extAtn++;
                total++;
                per = (atn / total)*100;
            }
            cout << extAtn << " lagani padengi" << endl;
        }
    }
}