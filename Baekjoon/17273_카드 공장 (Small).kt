import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val (n, m) = readLine().split(' ').map { it.toInt() }
    val front = IntArray(10010)
    val back = IntArray(10010)
    val isBack = BooleanArray(10010)
    // repeat(n){S(readLine()).run{a[it]=i; b[it]=i}} 헐 개쩔어
    for (i in 1..n) {
        val (a, b) = readLine().split(' ').map { it.toInt() }
        front[i] = a
        back[i] = b
    }
    for (i in 1..m) {
        val k = readLine().toInt()
        for (j in 1..n) {
            if (isBack[j]) {
                if (back[j] <= k) {
                    isBack[j] = false
                }
            } else {
                if (front[j] <= k)
                    isBack[j] = true
            }

        }
    }
    var ans = 0
    for (i in 1..n)
        if (isBack[i])
            ans += back[i]
        else ans += front[i]
    print(ans)
}