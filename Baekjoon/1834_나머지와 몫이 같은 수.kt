import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n = readLine().toLong()
    var ans = 0L
    for (i in 1 until n) {
        ans += (n + 1) * i
    }
    println(ans)
}
