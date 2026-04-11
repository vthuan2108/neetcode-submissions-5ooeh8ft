//số ngày phải chờ để gặp nhiệt độ cao hơn 
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st; // luu chi so ngay chua tim dc ngay nhiet cao 
        int n= temperatures.size();
         vector<int> a(n,0);// mang chua ket qua cua nhiet do ngay do

        for( int i=0; i<n; i++){
            while(!st.empty() && temperatures[i]> temperatures[st.top()] ){
                 int tmp=st.top();
                 st.pop();
                 a[tmp]= i-tmp;
                 
            }
            st.push(i);
        }
        return a;
    }
};
