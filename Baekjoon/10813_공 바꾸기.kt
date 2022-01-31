import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val (n, m) = readLine()!!.split(' ').map { it.toInt() }
    val a = IntArray(n + 1)
    for (i in 1..n)
        a[i] = i
    repeat(m) {
        val (i, j) = readLine().split(' ').map { it.toInt() }
        val tmp = a[i]
        a[i] = a[j]
        a[j] = tmp
    }
    for (i in 1..n)
        print("${a[i]} ")
}
