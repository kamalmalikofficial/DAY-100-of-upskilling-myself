class Solution {
    public:
        vector<double> convertTemperature(double celsius) {
            vector<double> arr;
            double kelvin = celsius+273.15;
            double faran = (celsius*1.8) +32;
            arr.push_back(kelvin);
            arr.push_back(faran);
    
            return arr;2
        }
    };