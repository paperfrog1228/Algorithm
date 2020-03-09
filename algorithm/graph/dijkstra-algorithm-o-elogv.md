# Dijkstra algorithm\[O\(ElogV\)\]



```java
import javax.xml.bind.Element;
import java.util.*;

public class Main {
    static int[] dist;
    static int nE, nV;
    static ArrayList<ArrayList<int[]>> list = new ArrayList<>();
    static ArrayList<int[]> nodes = new ArrayList<>();
    static int node[] = new int[2];//index:0 ->end 값 index:1 -> weight
    static final int inf = 1000000;

    static PriorityQueue<Element> prq = new PriorityQueue<>();

    public static void dijk(int start) {
        dist[start] = 0;
        prq.offer(new Element(start, dist[start]));
        while (!prq.isEmpty()) {
            int cost = prq.peek().getDistance();
            int here = prq.peek().getIndex();
            prq.poll();

            if (cost > dist[here])
                continue;

            for (int j = 0; j < list.get(here).size(); j++) {
                int temp[] = list.get(here).get(j);
                if (dist[temp[0]] > dist[here] + temp[1]) {
                    dist[temp[0]] = dist[here] + temp[1];
                    prq.offer(new Element(temp[0], dist[temp[0]]));
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
        for (int i = 1; i <= nV; i++)
            dist[i] = inf;

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
            if (dist[i] == inf) System.out.println("INF");
            else System.out.println(dist[i]);
    }

    static public class Element implements Comparable<Element> {
        private int index;
        private int distance;

        Element(int index, int distance) {
            this.index = index;
            this.distance = distance;
        }

        public int getIndex() {
            return index;
        }

        public int getDistance() {
            return distance;
        }

        public int compareTo(Element o) {
            return distance - o.distance;
        }
    }

}
```

