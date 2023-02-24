#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num_mitter;
    cout << "Amount of mitter: ";
    cin >> num_mitter;
    vector<int> pre_mitter(num_mitter);
    vector<int> now_mitter(num_mitter);

    int total_ammount;

    for (int i = 0; i < num_mitter; i++)
    {
        cout << "Mitter No-" << i + 1<<": ";
        cin >> pre_mitter[i] >> now_mitter[i];
        int unit = now_mitter[i] - pre_mitter[i];
        cout << unit << "\n";
        total_ammount += unit;
        cout << "=====================\n";
    }
    cout << "\n";
    cout << "Total Ammount: " << total_ammount << "\n\n";

// 
    int main_mitter_pre, main_mitter_now;
    cout << "Enter MM Units: ";
    cin >> main_mitter_pre >> main_mitter_now;
    int main_mit_unit = main_mitter_now - main_mitter_pre;
    cout << "Main mitter unit = " << main_mit_unit;

// main mitter biog fol
    cout << "================================\n";
    int MM_Ans = main_mit_unit - total_ammount;
    cout << "MM Last Unit = " << MM_Ans << "\n";

    return 0;
}




/* 

    input system
    
    8 4
    10 5
    9 3

 */