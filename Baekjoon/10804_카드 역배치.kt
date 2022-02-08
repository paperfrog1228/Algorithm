import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val a: Array<Int> = Array(21) { it }
    repeat(10) {
        val (l, r) = readLine().split(' ').map { it.toInt() }
        val c: Array<Int> = Array(r - l + 1) { a[l + it] }
        val b = c.reversed()
        for (i in l..r)
            a[i] = b[i - l]
    }
    for (i in 1..20)
        print("${a[i]} ")
}
