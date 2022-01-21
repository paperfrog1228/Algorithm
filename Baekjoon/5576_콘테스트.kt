import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val l = arrayListOf<Int>()
    repeat(10) {
        l.add(readLine().toInt())
    }
    l.sortByDescending { it }
    print("${l[0] + l[1] + l[2]} ")
    l.clear()
    repeat(10) {
        l.add(readLine().toInt())
    }
    l.sortByDescending { it }
    print("${l[0] + l[1] + l[2]}")
}
