import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val days = arrayOf(31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31)
    val months = arrayOf(
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    )
    var (month, day, year, time) = readLine().split(' ')
    var yoon = false
    var y = year.toInt()
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        yoon = true
    var progress = 0
    var total = 0
    for (i in 0..11)
        total += days[i]
    if (yoon) total += 1
    total *= 1440
    for (i in 0..11) {
        if (month == months[i]) {
            break
        }
        progress += days[i]
        if (i == 1 && yoon)
            progress += 1
    }
    progress += ((day[0] - '0') * 10 + (day[1] - '0') - 1)
    progress *= 1440

    progress += ((time[0] - '0') * 10 + (time[1] - '0')) * 60 +
            ((time[3] - '0') * 10 + (time[4] - '0'))
    println(progress.toDouble() / total.toDouble() * 100)
}