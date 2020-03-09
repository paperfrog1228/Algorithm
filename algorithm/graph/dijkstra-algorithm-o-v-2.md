# Dijkstra algorithm\[O\(V^2\)\]



```java
import java.util.*;

public class Main {
    static int[] dist;
    static boolean[] visit;
    static int nE, nV;
    static ArrayList<ArrayList<int[]>> list=new ArrayList<>();
    static ArrayList<int[]> nodes = new ArrayList<>();
    static int node[] = new int[2];//index:0 ->end 값 index:1 -> weight
    //    static final int inf = Integer.MAX_VALUE;
    static final int inf = 1000000;

    public static void dijk(int start) {
        dist[start] = 0;
        for (int j = 0; j < nV; j++) {
            int min = inf + 1;
            int index = -1;
            for (int k = 1; k <= nV; k++) {
                if (visit[k] == false && min > dist[k]) {
                    min = dist[k];
                    index = k;
                }
            }
            visit[index] = true;
            for (int l = 0; l <= list.get(index).size() - 1; l++) {
                int temp[] = list.get(index).get(l);
                if (dist[temp[0]] > dist[index] + temp[1]) {
                    dist[temp[0]] = dist[index] + temp[1];
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        nV = scan.nextInt();
        nE = scan.nextInt();
        int start = scan.nextInt();
        dist = new int[nV + 1];
        visit = new boolean[nV + 1];

        for (int i = 1; i <= nV; i++) {
            dist[i] = inf;
        }
        for (int i = 0; i <= nV; i++) {
            nodes = new ArrayList<>();
            list.add(nodes);
        }
        for (int i = 0; i < nE; i++) {
            node = new int[2];
            int t1 = scan.nextInt();
            int t2 = scan.nextInt();
            int t3 = scan.nextInt();
            node[0] = t2;
            node[1] = t3;
            list.get(t1).add(node);
        }
        dijk(start);
        for (int i = 1; i <= nV; i++)
            if(dist[i]==inf) System.out.println("INF");
            else System.out.println(dist[i]);
    }
}
```

