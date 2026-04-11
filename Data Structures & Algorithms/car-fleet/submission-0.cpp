class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
    vector<pair<int,int>> cars;

    for(int i=0;i<position.size();i++){
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end(), greater<pair<int,int>>());
       
        stack<double> st;

        for(auto car : cars){

            double time = (double)(target - car.first) / car.second;
            st.push(time);

            if(st.size() >= 2){
                double t1 = st.top();
                st.pop();
                double t2 = st.top();

                if(t1 <= t2){
                    // nhập fleet
                }
                else{
                    st.push(t1);
                }
            }
        }

        return st.size();
    }    
    
};
