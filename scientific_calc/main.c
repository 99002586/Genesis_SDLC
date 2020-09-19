#include <operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
double calculator_operand1 = 0;
double calculator_operand2 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, POWER, HIGHER_ROOT, LOGARITHM, NATURAL_LOGARITHM, SINE, COSINE, TANGENT, COTANGENT, SQUARE_ROOT, CUBE_ROOT, INVERSE, DEG_TO_RAD, RAD_TO_DEG, CEIL_VALUE, FLOOR_VALUE, ABS_VALUE,  EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Higher roots\n7. Logarithm\n8. Natural Logarithm\n9. Sine\n10. Cosine\n11. Tangent\n12. Cotangent\n13. Square root\14. Cube root\n15. Inverse\n16. Deg_to_Rad\n17. Rad_to_Deg\n18. Ceil_value\n19. Floor_value\n20. Abs_value\n21. Exit");
    printf("\n\tEnter your choice\n");
    double result_float=0.0;
   
     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        if(calculator_operation>6)
        {
            printf("\n\tEnter your Number\n");
            __fpurge(stdin);
            scanf("%lf ", &calculator_operand1);
              }
        else
        {
            printf("\n\tEnter your Numbers with space between them\n");
            __fpurge(stdin);
            scanf("%lf %lf", &calculator_operand1, &calculator_operand2);
        }
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            result_float=add(calculator_operand1, calculator_operand2);
            printf("\n\t%lf + %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            result_float=subtract(calculator_operand1, calculator_operand2);
            printf("\n\t%lf - %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            result_float=multiply(calculator_operand1, calculator_operand2);
            printf("\n\t%lf * %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            result_float=divide(calculator_operand1, calculator_operand2);
            printf("\n\t%lf / %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
           result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case POWER:
            result_float=power(calculator_operand1, calculator_operand2);
            printf("\n\t%lf ** %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
                
        case LOGARITHM:
            result_float=logarithm(calculator_operand1);
            printf("\n\tlog10 of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case NATURAL_LOGARITHM:
            result_float=natural_logarithm(calculator_operand1);
            printf("\n\tlog of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case SINE:
            result_float=sine(calculator_operand1);
            printf("\n\tsine of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case COSINE:
            result_float=cosine(calculator_operand1);
            printf("\n\tcosine of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case TANGENT:
            result_float=tangent(calculator_operand1);
            printf("\n\t tan of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case COTANGENT:
            result_float=cotangent(calculator_operand1);
            printf("\n\t cot of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
           result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case SQUARE_ROOT:
            result_float=square_root(calculator_operand1);
            printf("\n\t sqrt of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
          
         case INVERSE:
            result_float=inverse(calculator_operand1);
            printf("\n\t inverse of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
         case DEG_TO_RAD:
            result_float=deg_to_rad(calculator_operand1);
            printf("\n\t radian of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
          case RAD_TO_DEG:
            result_float=rad_to_deg(calculator_operand1);
            printf("\n\t degree of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
          case CEIL_VALUE:
            result_float=ceil_value(calculator_operand1);
            printf("\n\t ceil value of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
          case FLOOR_VALUE:
            result_float=floor_value(calculator_operand1);
            printf("\n\t floor value of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
          case ABS_VALUE:
            result_float=absolute_value(calculator_operand1);
            printf("\n\t abs value of %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            result_float);
            
            __fpurge(stdin);
            getchar();
            break;
        case 21:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
