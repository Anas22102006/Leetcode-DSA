class Solution {
public:
    int dis(vector<int> v1, vector<int> v2){
        double dist= pow((v1[0]-v2[0]),2) + pow((v1[1]-v2[1]),2);
        return dist;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<double> d;
        bool con =false;
        d.push_back(dis(p1,p2));
        d.push_back(dis(p2,p3));
        d.push_back(dis(p3,p4));
        d.push_back(dis(p1,p4));
        d.push_back(dis(p1,p3));
        d.push_back(dis(p2,p4));
        sort(d.begin(),d.end());
        if(d[0]==0){con=false;}
        else if((d[0]==d[1]) && (d[1]== d[2]) && (d[2]==d[3]) && (d[4]==d[5])){con=true;}
        else{con=false;}
        return con;

    }
};