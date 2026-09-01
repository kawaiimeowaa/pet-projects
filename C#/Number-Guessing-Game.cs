Console.WriteLine("Number-Guessing-Game\n");

Random num = new Random();
int secretNumber = num.Next(1, 11);
int attempts = 3;
int i = 0;

Console.WriteLine("This is (≧◡≦) Tobi. He thought of a number. Try to guess it.\n");

while (i < attempts)
{
    Console.Write("Enter your number: ");
    int userNumber = Convert.ToInt32(Console.ReadLine());
    if (i == 0) { 
        Console.WriteLine("You have 2 more tries.\n"); 
    }
    else if (i == 1)
    {
        Console.WriteLine("You have one last try left..\n");
    }

    if (secretNumber == userNumber)
    {
        Console.WriteLine("You guessed Toby's number!!!");
        break;
    }
    else
    {
        Console.WriteLine("Unfortunately, you didn't guess Toby's number :(");
        if (secretNumber < userNumber)
        {
            Console.WriteLine("Too high");
        }
        else
        {
            Console.WriteLine("Too low");
        }

    }
    i++;
}