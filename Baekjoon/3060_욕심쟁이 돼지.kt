import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    repeat(readLine().toInt()) {
        val n = readLine().toInt()
        var prev = readLine().split(' ').map { it.toLong() } as MutableList<Long>
        var ans = 1
        while (prev.sum() <= n) {
            ans++
            val next = mutableListOf<Long>(0, 0, 0, 0, 0, 0)
            for (i in 0..5) {
                next[i] = prev[i] + prev[(i+5)%6] + prev[(i+1)%6] + prev[(i+3)%6]
            }
            prev.clear()
            prev.addAll(next)
        }
        println(ans)
    }
}
