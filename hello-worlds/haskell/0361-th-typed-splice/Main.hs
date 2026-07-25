{-# LANGUAGE TemplateHaskell #-}
import Language.Haskell.TH

main :: IO ()
main = $$(return [|| putStrLn "Hello, World!" ||])
