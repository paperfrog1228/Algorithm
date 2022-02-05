import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val T = readLine().toInt()
    repeat(T) {
        val (w, n) = readLine().split(' ').map { it.toInt() }
        var nx = 0
        var nw = 0
        var ans = 0L
        repeat(n) {
            val (x_i, w_i) = readLine().split(' ').map { it.toInt() }
            if (nw == w) {
                ans += nx * 2
                nw = 0
            }
            ans += x_i - nx
            if (nw + w_i > w) {
                ans += x_i * 2
                nw = w_i
            } else nw += w_i
            nx = x_i
        }
        ans += nx
        println(ans)
    }
}
