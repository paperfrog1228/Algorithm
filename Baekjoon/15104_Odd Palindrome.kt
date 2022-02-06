import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var s = readLine()
    var ans = true
    for (i in 0 until s.length) {
        for (j in i + 1 until s.length) {
            var chk = true
            for (k in i..j) {
                if (s[k] != s[j - k + i]) {
                    chk = false
                    break
                }
            }
            if (chk && (j - i + 1) % 2 == 0) {
                ans = false
                break
            }
        }
        if (!ans) {
            print("Or not.")
            return
        }
    }
    print("Odd.")
}
