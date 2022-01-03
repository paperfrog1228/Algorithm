import java.io.*
import java.lang.Integer.max

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n = readLine().toInt()
    val a: List<Int> = readLine().split(' ').map { it.toInt() }
    var ans = 1
    var now = 1
    for (i in 1..n - 1) {
        if (a[i - 1] > a[i]) {
            ans = max(ans, now)
            now = 0
        }
        now += 1
    }
    ans = max(ans, now)
    now = 1
    for (i in 1..n - 1) {
        if (a[i - 1] < a[i]) {
            ans = max(ans, now)
            now = 0
        }
        now += 1
    }
    ans = max(ans, now)
    print(ans)
}