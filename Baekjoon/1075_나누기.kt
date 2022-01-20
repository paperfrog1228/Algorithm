import java.io.*
import java.lang.Integer.min

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var n = readLine().toInt()
    n -= n % 100
    val g = n + 100
    val f = readLine().toInt()
    var ans = 100
    while (n < g) {
        if (n % f == 0)
            ans = min(ans, n % 100)
        n++
    }
    if (ans < 10)
        print(0)
    print(ans)
}
