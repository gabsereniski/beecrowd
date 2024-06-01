import os

base_dir = "solutions/"

categories = {
    "beginner/": "Beginner",
    "ad-hoc/": "Ad-Hoc",
    "strings/": "Strings",
    "ds/": "Data Structures and Libraries",
    "math/": "Mathmatics",
    "paradigms/": "Paradigms",
    "graph/": "Graphs",
    "geometry/": "Computational Geometry",
}

with open("README.md", "w") as file:
    print("# URI/beecrowd solutions :balloon:\n", file=file)
    print("All of my accepted answers.\n", file=file)

    for cat in categories.keys():
        print("<details>", file=file)
        print(f"  <summary><b>{categories[cat]}</b></summary>\n", file=file)

        solutions = {}
        for solution in os.listdir(base_dir + cat):
            file_path = os.path.join(base_dir + cat, solution)
            solutions[os.path.splitext(solution)[0]] = f"  [[{os.path.splitext(solution)[0]}]({file_path})]"
        
        solutions = dict(sorted(solutions.items()))
        
        for solution in solutions.values():
            print(solution, file=file)

        print("\n</details>\n", file=file)


