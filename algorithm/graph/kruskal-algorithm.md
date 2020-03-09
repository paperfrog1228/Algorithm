# Kruskal Algorithm

유니온 파인드의 개념을 알아야 구현 가능하며, 이후 C++로도 짜봐야겠따.

```java
import java.util.*;
import java.lang.*;

class Main {

    static int v, e;
    static ArrayList<Edge> list = new ArrayList<Edge>();
    static int header[] = new int[10001];
    static int answer;

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        v = scan.nextInt();
        e = scan.nextInt();
        int l, r;
        for (int i = 0; i < e; i++) {
            l = scan.nextInt();
            r = scan.nextInt();
            header[l] = l;
            header[r] = r;
            Edge edge = new Edge(l, r, scan.nextInt());
            list.add(edge);
        }

        Collections.sort(list);

        for (int i = 0; i < e; i++)
            link(i);
        System.out.println(answer);
    }

    static void link(int i) {
        if (find(list.get(i).getLeft()) != find(list.get(i).getRight())) {
            union(list.get(i).getLeft(), list.get(i).getRight());
            answer += list.get(i).getWeight();
        }
    }

    static int find(int num) {
        if (num == header[num])
            return header[num];
        return find(header[num]);
    }

    static void union(int num1, int num2) {
        int num1Root = find(num1);
        int num2Root = find(num2);
        header[num2Root] = num1Root;
    }
}

class Edge implements Comparable<Edge> {
    public int left;
    public int right;
    public int weight;

    public Edge(int left, int right, int wegith) {
        this.left = left;
        this.right = right;
        this.weight = wegith;
    }
    @Override
    public int compareTo(Edge e) {
        return weight - e.weight;
    }
}

```

