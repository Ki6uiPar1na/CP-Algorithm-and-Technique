import java.util.*;

public class CalendF_arRows {
    public static void main(String[] args) {
        // Create a Calendar instance starting on Monday
        Calendar cal = new GregorianCalendar();
        cal.setFirstDayOfWeek(Calendar.MONDAY);

        int cn = 0;
        int n = new java.util.Scanner(System.in).nextInt();

        // Loop through the years from 1970 to 2037 (2038 is not inclusive)
        for (int year = 1970; year < 2038; year++) {
            // Loop through all months of the year
            for (int month = Calendar.JANUARY; month <= Calendar.DECEMBER; month++) {
                // Set the calendar to the first day of the current month and year
                cal.set(year, month, 1);

                // Count the number of rows (weeks) in the month
                int numRows = getWeeksInMonth(cal);
                cn += numRows;
            }
            // Print the year and total number of weeks (rows) for that year
            System.out.println("Year: " + year + ", Rows: " + cn);
            // Reset the counter for the next year
            cn = 0;
        }
        // Print the final counter value (should be 0)
        System.out.println(cn);
    }

    // Function to calculate the number of weeks in a given month
    private static int getWeeksInMonth(Calendar cal) {
        int year = cal.get(Calendar.YEAR);
        int month = cal.get(Calendar.MONTH);

        // Move the calendar to the first day of the next month
        Calendar nextMonth = new GregorianCalendar(year, month + 1, 1);

        // Calculate the number of weeks between the start of the current month and next month
        int numWeeks = nextMonth.get(Calendar.WEEK_OF_YEAR) - cal.get(Calendar.WEEK_OF_YEAR);

        // Handle cases where the year ends and the next month starts in a new year
        if (numWeeks < 0) {
            numWeeks += cal.getActualMaximum(Calendar.WEEK_OF_YEAR);
        }

        return numWeeks;
    }
}
