import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n = readLine().toInt()
    val a = mutableMapOf<Int, Int>()
    val b = mutableMapOf<Int, Int>()
    var ans = 0
    repeat(n) {
        val (x, y) = readLine().split(' ').map { it.toInt() }
        a.put(x, a.get(x)?.plus(1) ?: 1)
        b.put(y, b.get(y)?.plus(1) ?: 1)
    }
    a.values.forEach { if (it > 1) ans++ }
    b.values.forEach { if (it > 1) ans++ }
    println(ans)
}
