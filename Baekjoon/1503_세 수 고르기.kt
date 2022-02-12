import java.io.*
import java.lang.Integer.min
import kotlin.math.abs

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val (n, m) = readLine().split(' ').map { it.toInt() }
    val a = IntArray(1010)
    if (m != 0) {
        val b = readLine().split(' ').map { it.toInt() }
        for (i in b)
            a[i] = 1
    }
    var ans = Int.MAX_VALUE
    for (x in 1..1001)
        for (y in 1..1001)
            for (z in 1..1001) {
                if (a[x] == 1 || a[y] == 1 || a[z] == 1) continue
                ans = min(ans, abs(n - x * y * z))
            }
    print(ans)
}
