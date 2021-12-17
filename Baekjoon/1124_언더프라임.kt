import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var prime = IntArray(100100, { 1 })
    var check = IntArray(100100, { 1 })
    prime[1] = 0
    prime[0] = 0
    var (a, b) = readLine().split(' ').map { it.toInt() }
    for (i in 2..100010) {
        if (prime[i] > 0)
            for (j in 2 * i..100010 step i) {
                prime[j] = 0
                var tmp = j
                while (tmp % i == 0) {
                    tmp /= i
                    check[j]++
                }
            }
    }
    var ans = 0
    for (i in a..b) {
        if (prime[check[i] - 1] > 0)
            ans++
    }
    print(ans)
}