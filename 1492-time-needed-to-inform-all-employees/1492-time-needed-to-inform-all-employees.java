class Solution {
    class Graph{
        private int v;
	    private List<ArrayList<Integer>> adj;
        public Graph(int v){
            this.v = v;
            this.adj = new ArrayList<ArrayList<Integer>>(this.v);
            for(int i = 0; i < this.v; i++){
                this.adj.add(new ArrayList<Integer>());
            }
        }
        public void addEdge(int u, int v){
            adj.get(u).add(v);
        }
        public int dfs(int u, int[] informTime){
            int maxTime = 0;
            for(int v: adj.get(u)){
                int time = dfs(v, informTime);
                maxTime = Math.max(maxTime, time);
            }
            return informTime[u] + maxTime;
        }
    }
    public int numOfMinutes(int n, int headID, int[] manager, int[] informTime) {
        Graph graph = new Graph(n);
        for (int i = 0; i < n; i++) {
            if(manager[i] != -1){
                graph.addEdge(manager[i], i);
            }
        }
        return graph.dfs(headID, informTime);
    }
}