class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int counter=0;
        int score=0;
        for(int i=0;i<events.size();i++){
            if(events[i]=="WD"|| events[i]=="NB")
            score++;
            if(events[i]=="W") counter++;
            if(events[i]=="0"||events[i]=="1"||events[i]=="2"||events[i]=="3"||events[i]=="4"||events[i]=="5"||events[i]=="6"){
            int ans=stoi(events[i]);
            score+=ans;
            }
           
            if(counter==10) break;
        }
        vector<int>res={score, counter};
        return res;
    }
};