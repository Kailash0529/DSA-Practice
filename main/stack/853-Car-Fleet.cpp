class Solution {
    class Car{
        public:
        int speed,position;
       Car(int s, int p) : speed(s), position(p) {}
    };
   static bool comp(Car&a,Car&b)
    {
        return a.position<b.position;
    }
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<Car>cars;
        for(int i=0;i<position.size();i++)
        {
            Car car(speed[i],position[i]);
            cars.push_back(car);
        }
        sort(cars.begin(),cars.end(),comp);
        stack<float>st;
        for(int i=0;i<cars.size();i++)
        {
            float time=(target-cars[i].position)/(float)cars[i].speed;
            while(!st.empty()&&time>=st.top())
            {
                st.pop();
            }
            st.push(time);
        }
        return st.size();

    }
};