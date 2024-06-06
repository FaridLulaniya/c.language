#include <stdio.h>

int main() {
    int language_choice, recharge_choice;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n\n");
    printf("Enter your choice :- ");
    scanf("%d", &language_choice);

    switch (language_choice) {
        case 1:
            printf("\nPress 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n\n");
            printf("Enter your choice :- ");
            scanf("%d", &recharge_choice);

            switch (recharge_choice) {
                case 1:
                    printf("You have successfully done Internet Recharge.\n\n");
                    break;
                case 2:
                    printf("You have successfully done Top-up Recharge.\n\n");
                    break;
                case 3:
                    printf("You have successfully done Special Recharge.\n\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;

        case 2:
            printf("\nInternet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n\n");
            printf("Enter your choice :- ");
            scanf("%d", &recharge_choice);

            switch (recharge_choice) {
                case 1:
                    printf("Aapne safaltapurvak Internet Recharge kar liya he.\n\n");
                    break;
                case 2:
                    printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n\n");
                    break;
                case 3:
                    printf("Aapne safaltapurvak Special Recharge kar liya he.\n\n");
                    break;
                default:
                    printf("Galat chayan.\n");
            }
            break;

        case 3:
            printf("\nInternet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n\n");
            printf("Enter your choice :- ");
            scanf("%d", &recharge_choice);

            switch (recharge_choice) {
                case 1:
                    printf("Tame safaltapurvak Internet Recharge karyu chhe.\n\n");
                    break;
                case 2:
                    printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n\n");
                    break;
                case 3:
                    printf("Tame safaltapurvak Special Recharge karyu chhe.\n\n");
                    break;
                default:
                    printf("Galti chhe.\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

}
