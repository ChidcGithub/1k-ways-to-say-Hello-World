main :: IO ()
main = putStrLn (head infiniteGreetings)
  where
    infiniteGreetings = "Hello, World!" : infiniteGreetings
