import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val (a, b) = readLine().split(' ')
    var ans: Long = 0
    for (i in 0..a.length - 1)
        for (j in 0..b.length - 1) {
            ans += (a[i] - '0') * (b[j] - '0')
        }
    print(ans)
}