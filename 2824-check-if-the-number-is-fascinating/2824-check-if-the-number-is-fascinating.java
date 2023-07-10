class Solution {
    public boolean isFascinating(int n) {
        int a = n*2;
        int b = n*3;
        String s = n+""+a+""+b;

        if(s.length() < 8){
            return false;
        }
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i) == '0'){
                return false;
            }
            for(int j= i+1; j<s.length(); j++){
                if(s.charAt(i) == s.charAt(j) ){
                    return false;
                }
            }
        }
        return true;
    }
}