import java.io.*
import java.util.Comparator
import java.util.PriorityQueue

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var (n, m) = readLine().split(' ').map { it.toInt() }
    val pq = PriorityQueue<Int>(
        Comparator.reverseOrder()
    )
    var a = readLine().split(' ').map { it.toInt() }
    var b = readLine().split(' ').map { it.toInt() }
    for (i in 0..n - 1) pq.add(a[i])

    for (i in 0..m - 1) {
        var t = pq.poll()
        if (t < b[i]) {
            print(0)
            return
        }
        pq.add(t - b[i])
    }
    print(1)
}