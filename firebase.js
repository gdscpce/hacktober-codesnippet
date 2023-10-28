import { initializeApp} from 'firebase/app';
import { getAuth,GoogleAuthProvider} from 'firebase/auth';

// This page is for Firebase connectivity

import {
  getFirestore,collection
} from 'firebase/firestore'

const firebaseConfig = {
  apiKey: "YOUR API KEY",
  authDomain: "YOUR AUTH DOMAIN",
  databaseURL: "YOUR DATABASE URL",
  projectId: "YOUR PROJECT ID",
  storageBucket: "YOUR STORAGE BUCKET",
  messagingSenderId: "YOUR MESSAGING SENDER ID",
  appId: "YOUR APP ID",
  measurementId: "YOUR MEASUREMENT ID"
};
  const app=initializeApp(firebaseConfig);
  export const db=getFirestore();
  export const refer= collection(db,'users')
  export const auth=getAuth(app); 

  export const googleProvider = new GoogleAuthProvider()
