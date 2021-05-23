#include <iostream>
double result = 0;

double calculator21(double gross, double deduction) {
  double taxDed = gross - deduction;

  if (taxDed > 0 && taxDed < 18201) {
    std::cout << "Bracket: $0 – $18,200" << std::endl;
    std::cout << gross << " - " << deduction << " = " << taxDed << std::endl << std::endl;
    std::cout << "$0" << std::endl;
  } else if (taxDed > 18201 && taxDed < 45000) {
    std::cout << "Bracket: $18,201 – $45,000" << std::endl;
    double result = 0.19 * (taxDed - 18200);
    std::cout << "$0.19 x (" << taxDed << " - $18,200 =" << std::endl;
    std::cout << result << std::endl;

    return result;
  } else if (taxDed > 45001 && taxDed < 120000) {
    std::cout << "Bracket: $45,001 – $120,000" << std::endl;
    double result = 5092 + 0.325 * (taxDed - 45000);
    std::cout << "$5,092 + $0.325 x (" << taxDed << " - $45,000 =" << std::endl;
    std::cout << result << std::endl;

    return result;
  } else if (taxDed > 120001 && taxDed < 180000) {
    std::cout << "Bracket: $120,001 – $180,000" << std::endl;
    double result = 29467 + 0.37 * (taxDed - 120000);
    std::cout << "$29,467 + $0.37 x (" << taxDed << " - $120,000 =" << std::endl;
    std::cout << result << std::endl;

    return result;
  } else if (taxDed > 180001) {
    std::cout << "Bracket: > $180,001" << std::endl;
    double result = 51667 + 0.45 * (taxDed - 180000);
    std::cout << "$51,667 + $0.45 x (" << taxDed << " - $180,000 = " << std::endl;
    std::cout << result << std::endl;
  }
  return 0.0;
}

double calculator19 (double gross, double deduction) {
  double taxDed = gross - deduction;

  if (taxDed > 0 && taxDed < 18201) {
    std::cout << "Bracket: $0 – $18,200" << std::endl;
    std::cout << "$0" << std::endl;

    return result;
  } else if (taxDed > 18201 && taxDed < 37000) {
    std::cout << "Bracket: $18,201 – $37,000" << std::endl << std::endl;

    return result;
  } else if (taxDed > 37001 && taxDed < 90000) {
    std::cout << "Bracket: $37,001 – $90,000" << std::endl << std::endl;

    return result;
  } else if (taxDed > 90001 && taxDed < 180000) {
    std::cout << "Bracket: $90,001 – $180,000" << std::endl << std::endl;

    return result;
  } else if (taxDed > 180001) {
    std::cout << "Bracket: > $180,001" << std::endl << std::endl;
    return result;
  }
  return 0.0;
}

int main() {
  int choice;
  double c_gross, c_deduction;
  std::cout << "What calculator would you like? (21/19): ";
  std::cin >> choice;
  switch(choice) {
    case 21:
      std::cout << "You picked " << choice << "!" "Great choice!\n";
      std::cout << "Enter your gross and deduction please!: ";
      std::cin >> c_gross;
      std::cin >> c_deduction;
      calculator21(c_gross,c_deduction);
    case 19:
      std::cout << "You picked " << choice << "!" "Great choice!\n";
      std::cout << "Enter your gross and deduction please!: ";
      std::cin >> c_gross;
      std::cin >> c_deduction;
      calculator19(c_gross,c_deduction);
    default:
      std::cout << "Thats not an option, please try again" << std::endl;
  }
}
