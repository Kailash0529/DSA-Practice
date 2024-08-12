class Movie {
    String title;
    String genre;
    int rating;

    void play () {
        System.out.println("The movie " + title + " is playing.");
    }
}

public class ClassesAndObjects {
    public static void main(String[] args) {
        Movie movie1 = new Movie();
        movie1.title = "Lord of the Rings";
        movie1.genre = "Fantasy";
        movie1.rating = 8;
        movie1.play();
    }
}