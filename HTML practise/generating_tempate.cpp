#include <bits/stdc++.h>
using namespace std;












void graphs (){

/*

Understanding concepts of graphs :-
1) DFS, BFS -->for iteration
2) 0-1 BFS, DJK, Bellman ford :- for shortest distance from a source

0-1 BFS:- LIKE DJK but here we can keep two queues one with weight w and one with weight (w+1), 
which helps us skip the step to sort the existing queue which happens in PQ of Dijkstra

DJK :- remember that vis is not needed and bcz we are at a total distance of x in the front() of PQ with element name y , 
means that all the elements y in PQ already will have more weight hence all of em will be useless 
hence the front vertex/node y will be used to relax all its neighbours (who if are already exploited with higher weight need to be re-added to PQ .. remeber that this efficient version of neighbour will be picked up first anyways )

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>PQ;
vector<int>dist(n,INT_MAX);
PQ.push({0,0});
dist[0]=0;
while(!PQ.empty()){
    auto f = PQ.top();
    PQ.pop();
    //not necessary pruning step(can be used to skip nodes already visited) :- if(dist[f.second]<f.first)continue;

    for(int nei : G[f.second]){
        if(dist[nei]>W[f.second][nei] + dist[f.second] ){
            dist[nei] = W[f.second][nei] + dist[f.second];
            PQ.push({dist[nei],nei});
        }
    }
}

BELLMAN FORD:- (Used for +ve and -ve weighted graphs and also for detecting cycles by iterating nth time and if answer seems to be changed)
its a simple iteration over all the edges n-1 times (n==nodes) (visualize this :- first iteration relaxes the neighbours of source, second realxation relaxes the neigbours at dist 2 of source so n-1 iteration relaxes nth dist node hence all of em)
its just iterating over edges and using same distance relaxation as dijkstra algorithm ie:- if(dist[nei]>W[f.second][nei] + dist[f.second] ){
                                                                                                dist[nei] = W[f.second][nei] + dist[f.second];

NOTE you can iterate nth time to detect cycles also
//assuming edges to be a tuple with [src, nei, weight]
vector<int>dist(n,INT_MAX);
dist[0]=0;
for(int i=0;i<n-1;i++){
    for(int j=0;j<edges.size();j++){
            int src= edges[j][0];
            int dest = edges[j][1];
            int wt = edges[j][2];
            dist[dest] = max(dist[dest], dist[src]+wt);
    }
}

3)Prims , Kruskals :-  Miimum spanning TREE
Prims(a edge weighted and vis adhering DIJKSTRA modifictaion ):- only difference is existence of VIS array and here we just add the edge weight to PQ instead of dist to reach that node( this happend in DJK)

Feel that we want the shortest edge not visited by our whole connected component via PQ

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>PQ;
int weight_till_now=0;
PQ.push({0,0});
vector<int>vis(n,-1);
here 0 is edge weight and next 0 is the element name
weight_till_now+=0;
vis[0]=1;
while(!PQ.empty()){
    auto f = PQ.top();
    PQ.pop();
   if(vis[f.second]==1)continue;

   weight_till_now+=f.first;
   vis[f.second]=1;

    for(int nei : G[f.second]){
        if(vis[nei]!=-1){
            PQ.push({edges[f.second][nei], nei});
        }
    }
}



KRUSKALS (a post all edge SORTING DSU operation )(PRIMS has PQ and Kruskals has Sorting)

Feel that we want to connect our whole island of already connected component to new edges which don't share the same parent and have shortest weights

4) DFS_topological , BFS_indegree_sorting -->> Directed graphs 







5) DSU
vector<int>par(n);-->initially set all nodes to be their own parents




int find(int e){
    if(par[e]==e)return e;
    return par[e] = find(par[e]);
}

bool union ( int a, int b){
    int par_a = find(a);
    int par_b = find(b);
    if(par_a==par_b)return false;
    par[par_a] = par_b
    return truel
    //this step can be done via union of size and union of rank

}











6) Colorourings 





*/




}










void greedy_2(){
/*

ACTIVITY SELECTION PROBLEM









*/


}



void greedy_1(){
    /*
    FRACTIONAL KNAPSACK PROBLEM

    
    
    
    
    

    
    
    
    */
}
void greedy(){

/*
Basic workflow 
1)Initialization:- start with empty solution
2)Selection:- choose the best option
3)


work well where locally optiomal 
solution at each step leads to globally optimal solution




*/




}




vector<int> prefix_sum(vector<int>a){
    int sum=0;
    vector<int>ans;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        ans.push_back(sum);

    }
    return ans;
}

void difference_array(){
/*we'll look at a array whose prefix_sum array is given array A

A->2 3 5 7 9
constructed array (difference_array of A):- 2 1 2 2 2 

If we inc elements btw l,r by x in array what change will happen in diff array 
NOTE:- lth elemeent inc by x and rth term dec by x

imagine this to be orignal array whose A as above but its 2nd and 3rd elements are inc 2 4 6 7 9 

observe the changes in difference array :-2 2 2 1 2
changes are :- A[l]+=1; A[r+1]-=1;

Example code :-

here btw range a and b is admissible values 

 vector<int>diff(200001,0);




  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    diff[a]+=1;
    diff[b+1]-=1;
  }

   vector<int>actual(200001,0);
   int sum=0;
   vector<int>v(200001,0);
   for(int i=1;i<200001;i++ ){
    sum+=diff[i];
    actual[i]=1;
   }

*/





}


void sliding window(){
    /*
• Problem: Given an array of size n, find the number of distinct elements 
in all subarrays of size 'K'.






    */
}


void 2_pointers(){
    /*
    What conditions should we look for to check if it can be solved via  2_pointers (any one is enough)
    1) the appropriate answer condition can be found nested btw any [L,R] ([L,R]->satisfies conditions here)
    2) if the condition [L,R] satisfoes then all other conditions within it also satisfies

    
    Sample question 2 pointers ->find min subarray length with sum =>k
                                ->find max subarray length with sum<=k
    
    
    */
}




void stl_stuff(){
 /*//st.upper_bound(x)->returns value higher than x // better than upperbound(st.begin......)
 //st.end() ->returns the location at right of last element in set
 //st.find()->returns a iterator so use * before it to access value
 //multiset.erase ()->preferred to send iterator bcz if value sent then all will be deleted
//st.count()
if(st.find(x)!=st.end){
    cout<<"WE FOUND"<<endl;
}

//in order to move iterator ahead or behind use ++itr or --itr instead of itr++ or itr--
always use if(mpp.find()!=mpp.end()) insted of mpp[x] to check value as mpp will assign value of 0 to values we just check if they exist or not
just checking from mpp gives it value as 0

//custom_comparators

//priority_queue ->stores highest element on top



5
5 2
1 1 2 1 1
7 3
1 2 3 3 3 2 1
6 6
1 2 3 4 5 6
8 4
1 2 3 4 2 3 1 4
3 1
1 1 1


*/
}

//0000001111111111111

int binary_search_invariant(vector<int>arr, int condition){
    //first number greater than condition
    //We need to find first 1 
    int start=0;//points to all zeros
    int end =arr.size()-1;// points to all ones
    int mid = (start+end)/2;
    while(start+1<end){
         mid = (start+end)/2;
        cout<<start<<" "<<end<<endl;
        if(arr[mid]<=condition){
            //start can only point to 0's

            start=mid;
        }else{

            
            //end will only take values greater than condition
            end=mid;
            
        }
    
    
}

//note that if we wanted greater than equal to then start would be answer

//basically return value would be the only satusfying the condition


return end;
}


vector<int> merge_sort(vector<int>a){
    //base case
    int n = a.size();
   
    if(n==1){
        return a;
    }
    if(n==2){
        vector<int>ans(2);
        ans[0]=min(a[0],a[1]);
        ans[1]=max(a[0],a[1]);
        return ans;
    }

int size_1  = n/2;
int size_2 = n-n/2;

vector<int>a1;
vector<int>a2;
for(int i=0;i<n;i++){
    if(i<size_1){
    a1.push_back(a[i]);
    }else{
    a2.push_back(a[i]);
    }
}

a1 = merge_sort(a1);
a2 = merge_sort(a2);
vector<int>ans;
int i=0;
int j=0;
while(ans.size()!=n){
    if(i==size_1){
        ans.push_back(a2[j]);
        j++;
        continue;
    }
    if(j==size_2){
        ans.push_back(a1[i]);
        i++;
        continue;
    }
    if(a1[i]<=a2[j]){
        ans.push_back(a1[i]);
        i++;
        continue;
     }else{

        ans.push_back(a2[j]);
        j++;
        continue;

     }
    

}
return ans;


}


void generate_permutations(vector<int>arr, int n , int i){
//i represents that changes will not happen before ith index
if(i==n){
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}

for(int j=i+1;j<n;j++){
    swap(arr[i],arr[j]);
    generate_permutations(arr,n,i+1);
    swap(arr[i],arr[j]);


}
return;

}


void generate_combinations(vector<int>arr, int n , int i, vector<int>till_now){
// i represents the index of change

if(i==n){
if(till_now.size()==0){
    cout<<"EMPTY";
}
for(auto i: till_now){
    cout<<i<<" ";
}
cout<<endl;
return;
}

generate_combinations(arr,n,i+1,till_now);

till_now.push_back(arr[i]);

generate_combinations(arr,n,i+1,till_now);

return ;



}

int gcd(int a, int b){

    if(b==0)return a;

    return (b,a%b);

}

void generate_permutations_1(vector<int>arr, int n , int idx){
if(idx==n){
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}
for(int j=idx;j<n;j++){
    swap(arr[idx],arr[j]);
    generate_permutations(arr,n,idx+1);
    swap(arr[idx],arr[j]);
}
}
vector<int>spf;

void seive(int n){
    spf.resize(n+1,0);
    for(int i=2;i<=n;i++){
        if(spf[i]==0){

                spf[i]=i;
                for(int j=i*i;j<=n;j=i+j){
                    spf[j]=i;
                }


        }
    }
}
vector<int> prime_factorisation (int a){
    vector<int>ans;
    
    while(a!=1){
        int y = spf[a];
        ans.push_back(y);
        a=a/y;
    }


}


int main() {
    // Write C++ code here
 // cout<<binary_search_invariant({2,4,5,7,8,10,20,34},25);
 vector<int>arr = {2,4,5,7,8,10,20,34};
  cout<<*lower_bound(arr.begin(),arr.end(),20);

}