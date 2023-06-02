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
        public void dfsUtil(int u, boolean[]visited){
            visited[u] = true;
            for(int v : adj.get(u)){
                if(!visited[v]){
                    dfsUtil(v, visited);
                }
            }
        }
        public int bfsUtil(int s) {
            LinkedList<Integer> queue = new LinkedList<Integer>();
            Set<Integer> visited = new HashSet<>();
            queue.offer(s);
            visited.add(s);
            while (!queue.isEmpty()) {
                s = queue.poll();
                for (int v : adj.get(s)) {
                    if (!visited.contains(v)) {
                        visited.add(v);
                        queue.offer(v);
                    }
                }
            }
            return visited.size();
        }
        public int bfs(){
            int answer = 0;
            for (int i = 0; i < this.v; i++) {
                answer = Math.max(answer, bfsUtil(i));
            }
            return answer;
        }
    }
    public int maximumDetonation(int[][] bombs) {
        Graph graph = new Graph(bombs.length);
        for (int i = 0; i < bombs.length; i++) {
            for (int j = 0; j < bombs.length; j++) {
                int xi = bombs[i][0];
                int yi = bombs[i][1];
                int ri = bombs[i][2];

                int xj = bombs[j][0];
                int yj = bombs[j][1];

                if ((long)ri * ri >= (long)(xi - xj) * (xi - xj) + (long)(yi - yj) * (yi - yj)) {
                    graph.addEdge(i, j);
                }
            }
        }
        return graph.bfs();
    }
}