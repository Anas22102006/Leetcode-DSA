class Solution {
public:
    int dayOfYear(string date) {
    int year= stoi(date.substr(0,4));
    int month= stoi(date.substr(5,2));
    int day= stoi(date.substr(8,2));
    vector<int> v={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0 && year%100!=0) || (year%400==0)){v[1]=29;}
    int tot=0;
    if(month==1){tot=day;}
    else{
    for(int i=0;i<month-1;i++){
        tot+=v[i];
    }
    tot+=day;
    }
    return tot;   
    }
};