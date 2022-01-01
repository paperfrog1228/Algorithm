import java.io.*

class monitor(val num: Int, val p: Long)

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n = readLine().toInt()
    val l: MutableList<monitor> = ArrayList()
    for (i in 1..n) {
        val (a, b) = readLine().split(' ').map { it.toLong() }
        l.add(monitor(i, a * a + b * b))
    }
    val ans = l.sortWith(compareByDescending(monitor::p).thenBy(monitor::num))
    for (i in 0..n - 1)
        println(l[i].num)
} 78