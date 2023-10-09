import mongoose, { Schema } from "mongoose";
import validator from "validator";

const schema = new mongoose.Schema(
  {
    name: {
      type: String,
      required: [true, "Please enter your name"],
    },
    email: {
      type: String,
      required: [true, "Please enter your email"],
      validate: validator.isEmail,
    },
    password: {
      type: String,
      required: true,
      select: false,
      minlength: 8,
    },   
    deleted: {
      type: Boolean,
      default: false,
    },
  },
  {
    timestamps: true,
  }
);

export const Model = mongoose.model("model", schema);
