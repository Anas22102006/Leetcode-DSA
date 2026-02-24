class Solution {
public:
    bool leap(int year){
        return ((year%4==0 && year%100!=0) || year%400==0);
    }
    int daysBetweenDates(string date1, string date2) {
        int Y1= stoi(date1.substr(0,4));
        int Y2= stoi(date2.substr(0,4));
        int m1= stoi(date1.substr(5,2));
        int m2= stoi(date2.substr(5,2));
        int d1= stoi(date1.substr(8,2));
        int d2= stoi(date2.substr(8,2));
        int y1=Y1-1;
        int y2=Y2-1;
        int dayson1= y1*365 + y1/4 -y1/100 +y1/400;
        int dayson2= y2*365 + y2/4 -y2/100+ y2/400;
        int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        for(int i=0;i<m1-1;i++){dayson1+=months[i];}
        if(leap(Y1) && m1>2){dayson1++;}
        for(int i=0;i<m2-1;i++){dayson2+=months[i];}
        if(leap(Y2) && m2>2){dayson2++;}
        dayson1+=d1;
        dayson2+=d2;
        return abs(dayson1-dayson2);

    }
};