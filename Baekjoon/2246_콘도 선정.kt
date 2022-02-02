import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n = readLine().toInt()
    val a: MutableList<Pair<Int, Int>> = ArrayList()
    repeat(n) {
        val (c, d) = readLine().split(' ').map { it.toInt() }
        a.add(c to d)
    }
    var ans = 0
    for (i in 0 until n) {
        var pos = false
        for (j in 0 until n) {
            if (i == j)
                continue
            if (a[i].first > a[j].first && a[i].second >= a[j].second) {
                pos = true
                break
            }
            if (a[i].second > a[j].second && a[i].first >= a[j].first) {
                pos = true
                break
            }
        }
        if (!pos) ans++
    }
    print(ans)
}
