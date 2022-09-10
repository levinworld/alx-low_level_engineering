#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (Success)
*/
int main(void)
{
	char lower_case;
	char upper_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		{
			putchar(lower_case);
		}
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
		{
			putchar(upper_case);
		}
			putchar('\n');

@@ -999,8 +999,8 @@  static int bcm2048_set_fm_search_tune_mode(struct bcm2048_device *bdev,

		 		timeout = BCM2048_AUTO_SEARCH_TIMEOUT;

				 

				 	if (!wait_for_completion_timeout(&bdev->compl,

							-			msecs_to_jiffies(timeout)))

					-			dev_err(&bdev->client->dev, "IRQ timeout.\n");

					+		msecs_to_jiffies(timeout)))

						+		dev_err(&bdev->client->dev, "IRQ timeout.\n");

					 

					 	if (value)

							 		if (!bdev->scan_state)
	return (0);
	
}
