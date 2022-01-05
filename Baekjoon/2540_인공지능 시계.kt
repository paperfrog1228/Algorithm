import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var (h, m, s) = readLine().split(' ').map { it.toInt() }
    var d = readLine().toInt()
    s += d
    while (s >= 60) {
        m++
        s -= 60
    }
    while (m >= 60) {
        h++
        m -= 60
    }
    while (h >= 24) {
        h -= 24
    }
    print("$h $m $s")
}