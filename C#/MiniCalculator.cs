Console.WriteLine("MiniCalculator\n");

float a;
float b;
float c;
Console.Write("Choose operation: ");
var operation = Console.ReadLine();
Console.Write("Choose first number: ");
a = float.Parse(Console.ReadLine());
Console.Write("Choose second number: ");
b = float.Parse(Console.ReadLine());

switch (operation)
{
    case "+":
        c = a + b;
        Console.WriteLine($"Resault: {c}"); 
        break;

    case "-":
        c = a - b;
        Console.WriteLine($"Result: {c}");
        break;

    case "*":
        c = a * b;
        Console.WriteLine($"Result: {c}");
        break;

    case "/":
        c = a / b;
        Console.WriteLine($"Result: {c}");
        break;
}
