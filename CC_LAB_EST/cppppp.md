class Solution {

public:

&#x20;   int minCost(int maxTime, vector<vector<int>>\& edges, vector<int>\& passingFees) {

&#x20;       int n=passingFees.size();

&#x20;       unordered\_map<int,vector<pair<int,int>>> mp;

&#x20;       for(auto \&it:edges){

&#x20;           mp\[it\[0]].push\_back({it\[1],it\[2]});

&#x20;           mp\[it\[1]].push\_back({it\[0],it\[2]});

&#x20;       }

&#x20;       priority\_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,

&#x20;                   greater<pair<int,pair<int,int>>>> pq;

&#x20;       vector<int> time(n,INT\_MAX);

&#x20;       pq.push({passingFees\[0],{0,0}});

&#x20;       time\[0]=0;

&#x20;       while(!pq.empty()){

&#x20;           auto it=pq.top();

&#x20;           pq.pop();

&#x20;           int price=it.first;

&#x20;           int t=it.second.first;

&#x20;           int node=it.second.second;

&#x20;           

&#x20;           if(t>maxTime) continue;

&#x20;           if(node==n-1) return price;

&#x20;           // if(time\[node]<t) continue;

&#x20;           

&#x20;           for(auto \&i:mp\[node]){

&#x20;               int u=i.first;

&#x20;               int duration=i.second;

&#x20;               if(time\[u]>duration+t){

&#x20;                   time\[u]=duration+t;

&#x20;                   pq.push({price+passingFees\[u],{t+duration,u}});

&#x20;               }

&#x20;           }

&#x20;       }

&#x20;       return -1;

&#x20;   }

};

