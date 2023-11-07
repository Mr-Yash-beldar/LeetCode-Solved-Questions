class Solution {
    public double[] convertTemperature(double celsius) {
        double k=celsius+273.15;
        double f=celsius * 1.80 +32.00;
        double temp[]={k,f};
        return temp;
        
    }
}