#include<iostream>
#include<vector>
using namespace std;
int main(){
            int node,edge;
            cin>>node>>edge;
            vector <int> vec[node];
            
            int n1,n2;
            for(int i=0;i<edge;i++){
                cin>>n1>>n2;
                vec[n1].push_back(n2);
                vec[n2].push_back(n1);
            }
            
            cout<<endl<<endl;
            
            for(int i=0;i<node;i++){
                for(int j=0;j<vec[i].size();j++){
                    cout<<vec[i][j]<<" ";
                }
                cout<<endl;
            }












    return 0;
}