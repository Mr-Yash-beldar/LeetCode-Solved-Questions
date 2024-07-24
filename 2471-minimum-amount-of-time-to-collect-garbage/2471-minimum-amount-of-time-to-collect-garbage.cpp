class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int totalTime = 0;
        int pickP = 0; //plastic pick time
        int pickG = 0; //glass pick time
        int pickM = 0; //metal pick time

        int lastP = -1; //last occurrence of plastic initially not moved hence -1
        int lastG = -1; //last occurrence of glass
        int lastM = -1; //last occurrence of metal

        // Calculate the total picking time and the last occurrence of each garbage type
        for (int k = 0; k < garbage.size(); k++) {
            string currentgarbage = garbage[k];
            for (char kachara : currentgarbage) {
                if (kachara == 'P') {
                    pickP++;
                    lastP = k;
                }
                if (kachara == 'G') {
                    pickG++;
                    lastG = k;
                }
                if (kachara == 'M') {
                    pickM++;
                    lastM = k;
                }
            }
        }

        // Calculate the travel time required for each garbage type
        int travelTime = 0; // traveltime
        if (lastP != -1) { //if moved it will >-1 
            for (int i = 0; i < lastP; i++) {  // go upto last garbage type
                travelTime += travel[i];
            }
        }
        if (lastG != -1) {
            for (int i = 0; i < lastG; i++) {
                travelTime += travel[i];
            }
        }
        if (lastM != -1) {
            for (int i = 0; i < lastM; i++) {
                travelTime += travel[i];
            }
        }

        totalTime = pickP + pickG + pickM + travelTime; // find totaltime with pickup time and travel time
        return totalTime;
    }
};
